/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NUVersion;

@interface NUIdentifier : NSObject <NSCopying> {

	NSString* _nameSpace;
	NSString* _name;
	NUVersion* _version;

}

@property (readonly) NSString * nameSpace;                         //@synthesize nameSpace=_nameSpace - In the implementation block
@property (readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (readonly) NUVersion * version;                          //@synthesize version=_version - In the implementation block
@property (readonly) NSString * stringRepresentation; 
+(char)validateName:(id)arg1 error:(out id*)arg2 ;
+(id)defaultNameSpace;
+(id)latestIdentifierWithName:(id)arg1 ;
+(id)latestIdentifierWithNameSpace:(id)arg1 name:(id)arg2 ;
+(id)identifierWithString:(id)arg1 error:(out id*)arg2 ;
+(char)validateIdentifierString:(id)arg1 error:(out id*)arg2 ;
+(char)validateIdentifierString:(id)arg1 space:(out id*)arg2 name:(out id*)arg3 version:(out id*)arg4 error:(out id*)arg5 ;
+(id)identifierRegularExpression;
+(char)validateNameSpace:(id)arg1 error:(out id*)arg2 ;
+(id)validNameSpaceRegularExpression;
+(id)validNameRegularExpression;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NUVersion *)version;
-(NSString *)stringRepresentation;
-(NSString *)nameSpace;
-(char)isEqualToIdentifier:(id)arg1 ;
-(id)initWithName:(id)arg1 version:(id)arg2 ;
-(id)initWithNameSpace:(id)arg1 name:(id)arg2 version:(id)arg3 ;
-(id)identifierWithVersion:(id)arg1 ;
@end

