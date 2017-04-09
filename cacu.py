import shutil
w = shutil.get_terminal_size()[0]
print('\x1b[38;33m#'*w)

while True:
	hp = input('輸入HP比率:')
	heal_p = input('輸入Heal(Perfect)比率:')
	heal_g = input('輸入Heal(Good)比率:')
	damage_miss = input('輸入Damage(miss)計算後比率:')
	if hp == '' or heal_g == '' or heal_p == '' or damage_miss == '':
		print('\n\x1b[38;31m有尚未填寫的空格~\n')
	else:
		break

hp = 100*float(hp)
damage_miss = 5*float(damage_miss)
miss_time = hp/damage_miss
heal_p = 1*float(heal_p)
num_p_heal = damage_miss/heal_p*5
print('\x1b[38;33m#'*w)
print('\x1b[38;32m')
if float(heal_g) > 0:
	heal_g = 1*float(heal_g)
	num_g_heal = damage_miss/heal_g*10
	print('你有%s滴血\n每次miss一次扣%s滴血(你可以連續miss次)' % (int(hp),damage_miss))
	if heal_p == heal_g:
		print('每打出5個Perfect或是10個Good會回復%s滴血' % (heal_p))
	else:
		print('每打出5個Perfect會回復%s滴血，或是10個good會回復%s滴血' % (heal_p,heal_g))
else:
	damage_miss_r = -1*float(heal_g)/10
	print('你有%s滴血\n每次miss一次扣%s滴血(你可以連續miss%s次)\n每次Good一次扣%s滴血(你可以連續Good%s次)\n每打出5個Perfect會回復%s滴血\n因此，打出%s,個Perfect就會回復%s滴血，等同於回復1次miss的數量回復力=%s+0+%s-%s=%s' % (int(hp),damage_miss,miss_time,damage_miss_r,hp/damage_miss_r,heal_p,num_p_heal,damage_miss,nnum_p_heal,hp/damage_miss_r,miss_time,num_p_heal+0+hp/damage_miss_r-miss_time))
