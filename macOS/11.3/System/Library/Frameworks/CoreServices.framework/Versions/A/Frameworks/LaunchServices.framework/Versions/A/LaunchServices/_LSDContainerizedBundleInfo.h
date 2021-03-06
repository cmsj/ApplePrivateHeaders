/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _LSDContainerizedBundleInfo : NSObject <NSSecureCoding> {

	int _record_modtime;
	int _placeholder_record_modtime;
	NSString* _bundleID;
	NSString* _path;
	NSString* _placeholder_path;

}

@property (nonatomic,readonly) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) int record_modtime;                          //@synthesize record_modtime=_record_modtime - In the implementation block
@property (nonatomic,retain) NSString * path;                             //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) int placeholder_record_modtime;              //@synthesize placeholder_record_modtime=_placeholder_record_modtime - In the implementation block
@property (nonatomic,retain) NSString * placeholder_path;                 //@synthesize placeholder_path=_placeholder_path - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)path;
-(NSString *)bundleID;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(int)record_modtime;
-(void)setRecord_modtime:(int)arg1 ;
-(int)placeholder_record_modtime;
-(void)setPlaceholder_record_modtime:(int)arg1 ;
-(NSString *)placeholder_path;
-(void)setPlaceholder_path:(NSString *)arg1 ;
@end

