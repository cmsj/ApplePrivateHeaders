/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ClassKit.framework/Versions/A/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>

@class NSArray;

@interface CLSRole : CLSObject {

	char _isEditable;
	long long _type;
	NSArray* _privileges;
	long long _sourceType;

}

@property (assign,nonatomic) long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * privileges;                //@synthesize privileges=_privileges - In the implementation block
@property (assign,nonatomic) long long sourceType;              //@synthesize sourceType=_sourceType - In the implementation block
@property (assign) char isEditable;                             //@synthesize isEditable=_isEditable - In the implementation block
+(char)supportsSecureCoding;
+(id)stringForRoleType:(long long)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(id)_init;
-(id)dictionaryRepresentation;
-(char)isEditable;
-(long long)sourceType;
-(void)setIsEditable:(char)arg1 ;
-(void)setSourceType:(long long)arg1 ;
-(NSArray *)privileges;
-(void)setPrivileges:(NSArray *)arg1 ;
@end

