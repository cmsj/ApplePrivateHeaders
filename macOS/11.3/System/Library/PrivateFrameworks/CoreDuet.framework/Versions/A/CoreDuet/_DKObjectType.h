/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _DKObjectType : NSObject <NSSecureCoding, NSCopying> {

	long long _typeCode;
	Class _objectClass;

}

@property (nonatomic,readonly) long long typeCode; 
@property (nonatomic,readonly) Class objectClass; 
+(char)supportsSecureCoding;
+(id)objectTypeWithName:(id)arg1 ;
+(id)objectTypeFromClass:(Class)arg1 ;
+(id)objectTypeWithTypeCode:(long long)arg1 ;
+(Class)associatedObjectClass;
+(long long)typeCodeFromName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)typeCode;
-(Class)objectClass;
-(id)initWithTypeCode:(long long)arg1 objectClass:(Class)arg2 ;
@end

