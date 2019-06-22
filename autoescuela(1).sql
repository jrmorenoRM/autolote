-- phpMyAdmin SQL Dump
-- version 4.8.5
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 22-06-2019 a las 07:55:26
-- Versión del servidor: 10.1.40-MariaDB
-- Versión de PHP: 7.3.5

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `autoescuela`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `alumnos`
--

CREATE TABLE `alumnos` (
  `id` int(20) NOT NULL,
  `nombre` varchar(30) COLLATE latin1_general_ci NOT NULL,
  `edad` int(2) NOT NULL,
  `sexo` varchar(9) COLLATE latin1_general_ci NOT NULL,
  `identidad` varchar(13) COLLATE latin1_general_ci NOT NULL,
  `trabaja` varchar(2) COLLATE latin1_general_ci NOT NULL,
  `apellido` varchar(30) COLLATE latin1_general_ci NOT NULL,
  `ciudad` varchar(20) COLLATE latin1_general_ci NOT NULL DEFAULT 'NO',
  `promediofinal` int(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_general_ci;

--
-- Volcado de datos para la tabla `alumnos`
--

INSERT INTO `alumnos` (`id`, `nombre`, `edad`, `sexo`, `identidad`, `trabaja`, `apellido`, `ciudad`, `promediofinal`) VALUES
(4, 'Juan Ramon', 21, 'Masculino', '0502199800129', 'Si', 'Moreno Deras', 'VILLANUEVA', 0),
(5, 'Sara', 40, 'Femenino', '0502197900771', 'No', 'Deras', 'POTRERILLOS', 0),
(6, 'Marvin', 43, 'Femenino', '0502197900771', 'Si', 'Tabora', 'VILLANUEVA', 0),
(7, 'David', 32, 'Masculino', '0102030102030', 'Si', 'Benavides', 'POTRERILLOS', 0),
(10, 'Juan Ramon ', 21, 'Masculino', '0502199800129', 'Si', 'Moreno', 'VILLANUEVA', 0),
(11, 'Juan Ramon ', 25, 'Masculino', '0502199800129', 'No', 'Moreno', 'VILLANUEVA', 86),
(13, 'Sara ', 40, 'Masculino', '0502197900129', 'Si', 'Lopez', 'SAN PEDRO SULA', 0),
(14, 'baibfd', 12, 'Femenino', '000000000000', 'No', 'ohsvjhsu', 'VILLANUEVA', 0);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `departamentos`
--

CREATE TABLE `departamentos` (
  `departamentoid` int(11) NOT NULL,
  `ciudad` varchar(255) COLLATE latin1_general_ci NOT NULL,
  `departamento` varchar(255) COLLATE latin1_general_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_general_ci;

--
-- Volcado de datos para la tabla `departamentos`
--

INSERT INTO `departamentos` (`departamentoid`, `ciudad`, `departamento`) VALUES
(780, 'SAN PEDRO SULA', 'CORTES'),
(780, 'VILLANUEVA', 'CORTES'),
(780, 'POTRERILLOS', 'CORTES');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `maestros`
--

CREATE TABLE `maestros` (
  `id` int(20) NOT NULL,
  `nombre` varchar(30) COLLATE latin1_general_ci DEFAULT 'NOT NULL',
  `edad` int(2) NOT NULL,
  `identidad` varchar(13) COLLATE latin1_general_ci NOT NULL,
  `ecivil` varchar(8) COLLATE latin1_general_ci NOT NULL,
  `sexo` varchar(9) COLLATE latin1_general_ci NOT NULL,
  `apellido` varchar(30) COLLATE latin1_general_ci NOT NULL,
  `email` varchar(99) COLLATE latin1_general_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_general_ci;

--
-- Volcado de datos para la tabla `maestros`
--

INSERT INTO `maestros` (`id`, `nombre`, `edad`, `identidad`, `ecivil`, `sexo`, `apellido`, `email`) VALUES
(782, 'Juan Ramon', 21, '0502119980129', 'Soltero', 'Masculino', 'Moreno Deras', 'moreno97@unitec.edu');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `marca`
--

CREATE TABLE `marca` (
  `idmarca` int(4) NOT NULL,
  `marca` varchar(20) COLLATE latin1_general_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_general_ci;

--
-- Volcado de datos para la tabla `marca`
--

INSERT INTO `marca` (`idmarca`, `marca`) VALUES
(1, 'Mitsubishi'),
(2, 'Toyota'),
(3, 'Ford'),
(4, 'Honda'),
(5, 'Hyundai'),
(6, 'KIA');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `matricula_alumnos`
--

CREATE TABLE `matricula_alumnos` (
  `idalumno` int(20) NOT NULL,
  `Fecha` varchar(20) COLLATE latin1_general_ci NOT NULL,
  `hora` varchar(60) COLLATE latin1_general_ci NOT NULL,
  `experienciaConducir` varchar(2) COLLATE latin1_general_ci NOT NULL,
  `maestro` varchar(30) COLLATE latin1_general_ci NOT NULL,
  `vehiculo` varchar(30) COLLATE latin1_general_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_general_ci;

--
-- Volcado de datos para la tabla `matricula_alumnos`
--

INSERT INTO `matricula_alumnos` (`idalumno`, `Fecha`, `hora`, `experienciaConducir`, `maestro`, `vehiculo`) VALUES
(4, '12-06-2019', '2:00 pm', 'si', 'juan', 'po'),
(10, '2019/06/26', '10:00 am', 'NO', 'Juan Ramon', 'Eclipse'),
(11, '2019/06/22', '6:00 pm', 'NO', 'Juan Ramon', 'Civic'),
(13, '2019/06/29', '8:00 am', 'SI', 'Juan Ramon', 'Eclipse'),
(13, '2019/06/28', '8:00 am', 'NO', 'Juan Ramon', 'Corolla');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `modelos`
--

CREATE TABLE `modelos` (
  `idmodelos` int(4) NOT NULL,
  `modelo` varchar(30) COLLATE latin1_general_ci NOT NULL,
  `descripcion` varchar(30) COLLATE latin1_general_ci NOT NULL,
  `idmarca` int(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_general_ci;

--
-- Volcado de datos para la tabla `modelos`
--

INSERT INTO `modelos` (`idmodelos`, `modelo`, `descripcion`, `idmarca`) VALUES
(1, 'Eclipse', 'Turismo', 1),
(2, 'Corolla', 'Turismo', 2),
(3, 'Focus', 'Turismo', 3),
(4, 'Civic', 'Turismo', 4),
(5, 'Genesi', 'Turismo', 5),
(6, 'Sportage', 'Camioneta', 6);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `resultadosexamenes`
--

CREATE TABLE `resultadosexamenes` (
  `idalumno` int(3) NOT NULL,
  `u_espejo` int(3) NOT NULL,
  `c_velocidad` int(3) NOT NULL,
  `c_cambios` int(3) NOT NULL,
  `c_carriles` int(3) NOT NULL,
  `respeto_normas` int(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_general_ci;

--
-- Volcado de datos para la tabla `resultadosexamenes`
--

INSERT INTO `resultadosexamenes` (`idalumno`, `u_espejo`, `c_velocidad`, `c_cambios`, `c_carriles`, `respeto_normas`) VALUES
(11, 100, 97, 88, 71, 70),
(13, 0, 0, 0, 0, 0);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `usuarios`
--

CREATE TABLE `usuarios` (
  `id` int(20) NOT NULL,
  `nombre` varchar(20) COLLATE latin1_general_ci NOT NULL,
  `usuario` varchar(20) COLLATE latin1_general_ci NOT NULL,
  `password` varchar(20) COLLATE latin1_general_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_general_ci;

--
-- Volcado de datos para la tabla `usuarios`
--

INSERT INTO `usuarios` (`id`, `nombre`, `usuario`, `password`) VALUES
(1, 'Juan Moreno', 'jmoreno', '1234'),
(3, 'Ramon Deras', 'rderas97', '21127597');

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `alumnos`
--
ALTER TABLE `alumnos`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `maestros`
--
ALTER TABLE `maestros`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `marca`
--
ALTER TABLE `marca`
  ADD PRIMARY KEY (`idmarca`);

--
-- Indices de la tabla `matricula_alumnos`
--
ALTER TABLE `matricula_alumnos`
  ADD KEY `idalumno` (`idalumno`);

--
-- Indices de la tabla `modelos`
--
ALTER TABLE `modelos`
  ADD KEY `idmarca` (`idmarca`);

--
-- Indices de la tabla `resultadosexamenes`
--
ALTER TABLE `resultadosexamenes`
  ADD KEY `idalumno` (`idalumno`);

--
-- Indices de la tabla `usuarios`
--
ALTER TABLE `usuarios`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT de las tablas volcadas
--

--
-- AUTO_INCREMENT de la tabla `alumnos`
--
ALTER TABLE `alumnos`
  MODIFY `id` int(20) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=15;

--
-- AUTO_INCREMENT de la tabla `maestros`
--
ALTER TABLE `maestros`
  MODIFY `id` int(20) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=783;

--
-- AUTO_INCREMENT de la tabla `usuarios`
--
ALTER TABLE `usuarios`
  MODIFY `id` int(20) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- Restricciones para tablas volcadas
--

--
-- Filtros para la tabla `matricula_alumnos`
--
ALTER TABLE `matricula_alumnos`
  ADD CONSTRAINT `matricula_alumnos_ibfk_3` FOREIGN KEY (`idalumno`) REFERENCES `alumnos` (`id`);

--
-- Filtros para la tabla `modelos`
--
ALTER TABLE `modelos`
  ADD CONSTRAINT `modelos_ibfk_1` FOREIGN KEY (`idmarca`) REFERENCES `marca` (`idmarca`);

--
-- Filtros para la tabla `resultadosexamenes`
--
ALTER TABLE `resultadosexamenes`
  ADD CONSTRAINT `resultadosexamenes_ibfk_1` FOREIGN KEY (`idalumno`) REFERENCES `alumnos` (`id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
