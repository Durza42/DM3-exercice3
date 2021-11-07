compte = 0     # argent sur le compte en banque au départ
cout = 0.01    # somme à payer ce jour-ci
ajout = 100000   # somme donnée par la banque chaque jour

   ## pour les 31 jours du mois
for i in range(31):

   compte -= cout    # on paye la banque
   compte += ajout   # la banque nous paye

      # si notre compte est négatif, c'est que au total l'affaire n'est pas rentable.
   if compte < 0:
      print ("********************************************")
      print ("**  L'affaire n'est pas rentable.         **")
      print ("**  On sera endetté à partir du jour ", i, "  **")
      print ("********************************************")
         # on quitte
      quit()
   else:
      print ("jour ", i, " : ")
      print ("  -> compte : ", compte)
      print ("  -> cout : ", cout)
      print ("  -> ajout : ", ajout)
      print ("")

   cout *= 2      # on devra payer 2 fois plus le prochain jour
   ajout += 10000   # la banque nous versera 10000€ de plus le prochain jour

