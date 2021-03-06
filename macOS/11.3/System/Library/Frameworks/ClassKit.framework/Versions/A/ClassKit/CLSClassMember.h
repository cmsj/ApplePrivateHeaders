/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ClassKit.framework/Versions/A/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSClassMember : CLSObject <CLSRelationable> {

	char _markedForDeletion;
	NSString* _personID;
	unsigned long long _roles;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) unsigned long long roles;              //@synthesize roles=_roles - In the implementation block
@property (assign,nonatomic) char markedForDeletion;                //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
+(char)supportsSecureCoding;
+(id)relations;
+(id)objectIDForClassID:(id)arg1 andPersonID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(char)markedForDeletion;
-(id)initWithClassID:(id)arg1 personID:(id)arg2 roles:(unsigned long long)arg3 ;
-(void)setMarkedForDeletion:(char)arg1 ;
-(unsigned long long)roles;
-(void)setRoles:(unsigned long long)arg1 ;
@end

