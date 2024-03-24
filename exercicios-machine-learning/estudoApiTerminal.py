## ideia para abrir uma aba em um temrinal para perguntar os comandos
from flask import Flask, request, jsonify
import openai

# Configure sua chave de API da OpenAI
api_key = "sua_chave_de_api"
openai.api_key = api_key

# inicialize o aplicativo Flask
app = Flask(__name__)

@app.route('/responder_comando', methods=['POST'])
def responder_comando():
    # recebe o comando do terminal do corpo da solicitação POST
    data = request.json
    comando = data['comando']

    # lógica para analisar e processar o comando conforme necessário (?????????????)
    resposta = generate_response(comando)

    return jsonify({'resposta': resposta})

def generate_response(comando):
    # modelo GPT para gerar uma resposta com base no comando
    prompt = f"Qual comando do terminal eu devo usar para '{comando}'?"
    response = openai.Completion.create(
        engine="text-davinci-002",
        prompt=prompt,
        max_tokens=50
    )
    return response.choices[0].text.strip()

if __name__ == '__main__':
    app.run(debug=True)
