#!/usr/bin/env python3

main_list = [];
while True:
    try:
        main_list.append(input());
    except EOFError:
        break;
number_of_samples = int(main_list.pop(0));
main_list.sort();
city_list = [];
rainfall_list = [];
for item in main_list:
    sample_split=item.split();
    if sample_split[0] not in city_list:
        city_list.append(sample_split[0]);
        rainfall_list.append([sample_split[1]]);
    else:
        rainfall_list[city_list.index(sample_split[0])].append(sample_split[1]);
mean_rainfall = [];
for item1 in rainfall_list:
    rainfall_sum = 0;
    if len(item1) != 1:
        for item2 in item1:
            rainfall_sum += int(item2);
        mean_calc = float(rainfall_sum / len(item1));
        mean_rainfall.append(mean_calc);
    else:
        mean_rainfall.append(float(item1[0]));
new_list = [];
for city,mean in zip(city_list,mean_rainfall):
    new_list.append((city,mean));
print(new_list);
