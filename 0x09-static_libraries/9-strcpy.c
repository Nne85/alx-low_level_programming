 size++;                     

                 }                                   

                count++;                            

		        }                                           

                                                    

        for (i = count - size; i < count; i++)      

	        {                                           

			                oi = oi + ((*(s + i) - 48) * m);    

					                m /= 10;                            

							        }                                           

        return (oi * pn);                           


