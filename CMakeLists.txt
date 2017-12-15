cmake_minimum_required(VERSION 3.8)
project(TrabalhoPraticoPOO_M1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Mundo.cpp Mundo.h Ninho.cpp Ninho.h Celula.cpp Celula.h ObjetosJogo.cpp ObjetosJogo.h ComandosConfiguracao.cpp ComandosConfiguracao.h ComportamentoBase.cpp ComportamentoBase.h Comandos.cpp Comandos.h main.h Formiga.cpp Formiga.h)
set(SOURCE_FILES ${SOURCE_FILES} Consola.cpp Consola.h ComportamentoMovimentoAleatorio.cpp ComportamentoMovimentoAleatorio.h)
add_executable(TrabalhoPraticoPOO_M1 ${SOURCE_FILES})