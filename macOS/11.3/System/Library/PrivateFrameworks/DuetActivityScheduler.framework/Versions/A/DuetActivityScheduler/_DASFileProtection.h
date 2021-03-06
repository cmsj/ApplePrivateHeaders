/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/Versions/A/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivityScheduler/DuetActivityScheduler-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding> {

	NSString* _fileProtection;

}

@property (nonatomic,copy) NSString * fileProtection;              //@synthesize fileProtection=_fileProtection - In the implementation block
+(char)supportsSecureCoding;
+(id)complete;
+(id)completeUntilFirstUserAuthentication;
+(id)completeUnlessOpen;
+(id)none;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileProtection:(NSString *)arg1 ;
-(char)indicatesProtection;
-(NSString *)fileProtection;
-(id)initWithProtection:(id)arg1 ;
@end

