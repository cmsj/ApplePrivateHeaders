/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _NCWidgetPrefsItem : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	NSString* _description;
	NSString* _imagePath;
	NSString* _imageBundlePath;
	NSString* _plugInPath;
	BOOL _enabled;
	BOOL _canDisable;
	BOOL _canSort;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * description;                  //@synthesize description=_description - In the implementation block
@property (nonatomic,copy) NSString * imagePath;                    //@synthesize imagePath=_imagePath - In the implementation block
@property (nonatomic,copy) NSString * imageBundlePath;              //@synthesize imageBundlePath=_imageBundlePath - In the implementation block
@property (nonatomic,copy) NSString * plugInPath;                   //@synthesize plugInPath=_plugInPath - In the implementation block
@property (assign,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL canDisable;                       //@synthesize canDisable=_canDisable - In the implementation block
@property (assign,nonatomic) BOOL canSort;                          //@synthesize canSort=_canSort - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)identifier;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)canDisable;
-(void)setCanDisable:(BOOL)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(NSString *)imagePath;
-(void)setImagePath:(NSString *)arg1 ;
-(NSString *)imageBundlePath;
-(void)setImageBundlePath:(NSString *)arg1 ;
-(NSString *)plugInPath;
-(void)setPlugInPath:(NSString *)arg1 ;
-(BOOL)canSort;
-(void)setCanSort:(BOOL)arg1 ;
@end
