/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>
#import <libobjc.A.dylib/_DKHasObjectType.h>

@class NSString, _DKIdentifierType;

@interface _DKIdentifier : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType> {

	NSString* _stringValue;
	_DKIdentifierType* _identifierType;

}

@property (retain) NSString * stringValue;                          //@synthesize stringValue=_stringValue - In the implementation block
@property (retain) _DKIdentifierType * identifierType;              //@synthesize identifierType=_identifierType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)entityName;
+(id)identifierWithString:(id)arg1 type:(id)arg2 ;
+(id)fromPBCodable:(id)arg1 ;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(char)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4 ;
+(id)_identifierFromManagedObject:(id)arg1 readMetadata:(char)arg2 cache:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(double)doubleValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)integerValue;
-(long long)typeCode;
-(void)setStringValue:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 type:(id)arg2 ;
-(_DKIdentifierType *)identifierType;
-(long long)compareValue:(id)arg1 ;
-(id)primaryValue;
-(id)objectType;
-(void)setIdentifierType:(_DKIdentifierType *)arg1 ;
-(id)toPBCodable;
-(char)copyToManagedObject:(id)arg1 ;
@end

