/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSMutableArray, HAPTLVUnsignedNumberValue, HAPCharacteristicValueRange, NSString;

@interface HAPCharacteristicValueLinearDerivedTransition : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _transitionPoints;
	HAPTLVUnsignedNumberValue* _sourceHAPInstanceID;
	HAPCharacteristicValueRange* _sourceValueRange;

}

@property (nonatomic,retain) NSMutableArray * transitionPoints;                            //@synthesize transitionPoints=_transitionPoints - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * sourceHAPInstanceID;              //@synthesize sourceHAPInstanceID=_sourceHAPInstanceID - In the implementation block
@property (nonatomic,retain) HAPCharacteristicValueRange * sourceValueRange;               //@synthesize sourceValueRange=_sourceValueRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(char)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setTransitionPoints:(NSMutableArray *)arg1 ;
-(void)setSourceHAPInstanceID:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setSourceValueRange:(HAPCharacteristicValueRange *)arg1 ;
-(NSMutableArray *)transitionPoints;
-(HAPTLVUnsignedNumberValue *)sourceHAPInstanceID;
-(HAPCharacteristicValueRange *)sourceValueRange;
-(id)initWithTransitionPoints:(id)arg1 sourceHAPInstanceID:(id)arg2 sourceValueRange:(id)arg3 ;
@end

