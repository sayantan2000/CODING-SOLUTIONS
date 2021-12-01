import pymysql

connection = pymysql.connect('127.0.0.1 ', 'root',  'minorpeoject')
with connection:
    cur = connection.cursor()
    cur.execute("SELECT VERSION()")
    version = cur.fetchone()
    print("Database version: {} ".format(version[0]))