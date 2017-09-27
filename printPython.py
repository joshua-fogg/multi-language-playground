class Print(object):
	def Main(args):
		count = int.Parse(args[1])
		i = 0
		while i < count:
			System.Threading.Thread.Sleep(1000)
			System.Console.WriteLine("Joshua Fogg")
			i += 1

	Main = staticmethod(Main)