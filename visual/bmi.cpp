wzrost = float(input('Podaj swoj wzrost'))
masa = float(input('Podaj mase'))
bmi = float(masa/(wzrost **2))
print ('Twoje BMI wynosi: ' + str(bmi))
if bmi < 20:
	print('Niedowaga')
if bmi>=20 and bmi<=25:
	print('Norma')
if bmi>25:
	print('Nadwaga')
