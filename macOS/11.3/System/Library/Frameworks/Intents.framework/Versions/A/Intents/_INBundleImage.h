/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INImage.h>

@class NSString, INImageBundle;

@interface _INBundleImage : INImage {

	NSString* _imageName;
	INImageBundle* _imageBundle;

}

@property (nonatomic,copy) NSString * imageName;                     //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) INImageBundle * imageBundle;              //@synthesize imageBundle=_imageBundle - In the implementation block
+(char)supportsSecureCoding;
-(id)_name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(id)_bundleIdentifier;
-(id)stringRepresentation;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(id)_bundlePath;
-(id)_dictionaryRepresentation;
-(char)_requiresRetrieval;
-(id)_copyWithSubclass:(Class)arg1 ;
-(void)_setName:(id)arg1 ;
-(void)_setBundlePath:(id)arg1 ;
-(id)_initWithURLRepresentation:(id)arg1 ;
-(char)_isSystem;
-(void)_setBundleIdentifier:(id)arg1 ;
-(id)_URLRepresentation;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithStringRepresentation:(id)arg1 ;
-(INImageBundle *)imageBundle;
-(void)setImageBundle:(INImageBundle *)arg1 ;
@end

