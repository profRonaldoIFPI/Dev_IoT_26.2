# 🌐 Desenvolvimento para Internet das Coisas (Dev_IoT)

Repositório de códigos-fonte, simulações e materiais didáticos da disciplina de **Desenvolvimento para Internet das Coisas** do **Instituto Federal do Piauí (IFPI) — Campus Floriano**.

- **Docente:** Prof. Me. Ronaldo Pires Borges ([ronaldo.pb@ifpi.edu.br](mailto:ronaldo.pb@ifpi.edu.br))
- **Plataforma Principal:** ESP32 (*esp32doit-devkit-v1*)
- **Ambiente de Desenvolvimento:** Visual Studio Code + PlatformIO + Wokwi Simulator

---

## 📁 Estrutura do Repositório

```text
├── Aula_3108/          # Aula prática 1: Introdução ao PlatformIO e primeiro teste com ESP32 (Blink)
├── Aula_1409/          # Aula prática 2: Configuração de ambiente, GPIOs, entradas/saídas e simulação no Wokwi
├── Referencias/        # Acervo de livros, apostilas e e-books técnicos sobre Arduino, ESP32, ESP8266 e IoT
├── Slides/             # Apresentações e materiais de apoio visual das aulas
└── README.md           # Visão geral do repositório
```

---

## 🛠️ Tecnologias e Ferramentas

- **[Visual Studio Code](https://code.visualstudio.com/):** Editor de código-fonte principal.
- **[PlatformIO IDE](https://platformio.org/):** Ecossistema para desenvolvimento de sistemas embarcados e IoT (gerenciamento de compiladores, bibliotecas e uploads).
- **[Wokwi Simulator](https://wokwi.com/):** Simulador de eletrônica e microcontroladores integrado ao VS Code (arquivos `diagram.json` e `wokwi.toml`).
- **Framework:** [Arduino Core para ESP32](https://github.com/espressif/arduino-esp32) em C/C++.
- **Hardware:** Microcontrolador ESP32 (Dual-Core, Wi-Fi e Bluetooth BLE).

---

## 🚀 Como Executar os Projetos

### 1. Pré-requisitos

1. Instale o [VS Code](https://code.visualstudio.com/).
2. No VS Code, instale as seguintes extensões pela aba de Extensões (`Ctrl+Shift+X`):
   - **PlatformIO IDE** (`platformio.platformio-ide`)
   - **Wokwi Simulator** (`wokwi.wokwi-vscode`)
3. Para utilizar o Wokwi integrado, obtenha sua licença de uso/ativação conforme instruções da extensão.

### 2. Abrindo um Projeto de Aula

Cada pasta de aula (`Aula_3108`, `Aula_1409`, etc.) é um projeto PlatformIO autônomo.

Para abrir no VS Code:
1. Vá em **File > Open Folder...** (ou abra o terminal na pasta correspondente).
2. Selecione a pasta da aula desejada (por exemplo, `Aula_1409`).
3. O PlatformIO identificará automaticamente o arquivo `platformio.ini` e fará o carregamento das dependências.

### 3. Compilação e Envio para Hardware Físico

Com o ESP32 conectado à porta USB:

- **Compilar o código:**
  ```bash
  pio run
  ```
- **Gravar no ESP32 (Upload):**
  ```bash
  pio run --target upload
  ```
- **Abrir Monitor Serial:**
  ```bash
  pio device monitor
  ```

### 4. Executando a Simulação no Wokwi

1. Abra o arquivo `diagram.json` da aula no VS Code.
2. Pressione `F1` e digite: **Wokwi: Start Simulator**.
3. Interaja com os componentes (botões, potenciômetros, LEDs) diretamente na interface gráfica.

---

## 📚 Material de Apoio e Referências

O diretório [`Referencias/`](./Referencias/) disponibiliza apostilas e livros para consulta sobre arquitetura do ESP32, protocolos de rede (MQTT, TCP/IP, Wi-Fi), sistemas operacionais de tempo real (FreeRTOS) e eletrônica básica. Consulte o catálogo completo em [Referencias/README.md](./Referencias/README.md).

---

## ✉️ Contato

- **Professor:** Ronaldo Pires Borges
- **Instituição:** Instituto Federal do Piauí (IFPI) — Campus Floriano
- **E-mail:** [ronaldo.pb@ifpi.edu.br](mailto:ronaldo.pb@ifpi.edu.br)
