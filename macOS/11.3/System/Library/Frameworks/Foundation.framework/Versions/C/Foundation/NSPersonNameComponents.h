/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding> {

	id _private;

}

@property (copy) NSString * namePrefix; 
@property (copy) NSString * givenName; 
@property (copy) NSString * middleName; 
@property (copy) NSString * familyName; 
@property (copy) NSString * nameSuffix; 
@property (copy) NSString * nickname; 
@property (copy) NSPersonNameComponents * phoneticRepresentation; 
+(char)supportsSecureCoding;
+(id)_allProperties;
+(id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(char)arg1 ;
+(id)_allComponents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)namePrefix;
-(void)setNamePrefix:(NSString *)arg1 ;
-(NSString *)nameSuffix;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(NSPersonNameComponents *)phoneticRepresentation;
-(void)setPhoneticRepresentation:(NSPersonNameComponents *)arg1 ;
-(char)isEqualToComponents:(id)arg1 ;
-(id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(char)arg1 ;
-(char)_isEmpty;
@end
