def search_replace(my_list, search, replace):
    copy_content = [v for v in my_list]
    for i in range(len(copy_content)):
        if copy_content[i] == search:
            copy_content[i] = replace
    return copy_content