#!/home/liuming/桌面/B0
class Web
 def initialize(id,name,gender,age)
 @student_id=id
 @student_name=name
 @student_gender=gender
 @student_age=age
 end
 def display_details()
      puts "Student id #@stu_id"
      puts "Student name #@stu_name"
      puts "Student gender #@stu_gen"
      puts "Student age #@stu_age"
 end
end

for i in 1..100
{ stu=Web.new("i","rand(36 ** 6).to_s(36)","rand('man','woman')","rand(15..20)")
  stu.display_details()
}

