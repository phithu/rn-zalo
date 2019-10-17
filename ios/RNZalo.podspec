
Pod::Spec.new do |s|
  s.name         = "RNZalo"
  s.version      = "1.0.0"
  s.summary      = "RNZalo"
  s.description  = <<-DESC
                  RNZalo
                   DESC
  s.homepage     = "https://zalo.me/"
  s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }
  s.author             = { "author" => "phithu.dev@gmail.com" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/phithu/rn-zalo.git", :tag => "master" }
  s.source_files  = "RNZalo/**/*.{h,m}"
  s.requires_arc = true


  s.dependency "React"
  s.dependency "ZaloSDK"

end
