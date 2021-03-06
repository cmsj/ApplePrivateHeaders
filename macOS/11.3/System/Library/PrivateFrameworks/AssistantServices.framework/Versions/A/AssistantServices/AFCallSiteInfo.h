/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSString;

@interface AFCallSiteInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	NSString* _imagePath;
	NSString* _symbolName;

}

@property (nonatomic,copy,readonly) NSString * imagePath;               //@synthesize imagePath=_imagePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * symbolName;              //@synthesize symbolName=_symbolName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)symbolName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)imagePath;
-(id)buildDictionaryRepresentation;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithImagePath:(id)arg1 symbolName:(id)arg2 ;
@end

