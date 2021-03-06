/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface GCControllerElementSettings : NSObject <NSSecureCoding> {

	char _invertHorizontally;
	char _invertVertically;
	char _swapAxes;
	NSString* _mappingKey;
	/*^block*/id _changedHandler;

}

@property (getter=isCustomized,nonatomic,readonly) char customized; 
@property (nonatomic,readonly) NSString * mappingKey;                            //@synthesize mappingKey=_mappingKey - In the implementation block
@property (nonatomic,copy) id changedHandler;                                    //@synthesize changedHandler=_changedHandler - In the implementation block
@property (assign,nonatomic) char invertHorizontally;                            //@synthesize invertHorizontally=_invertHorizontally - In the implementation block
@property (assign,nonatomic) char invertVertically;                              //@synthesize invertVertically=_invertVertically - In the implementation block
@property (assign,nonatomic) char swapAxes;                                      //@synthesize swapAxes=_swapAxes - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDefaultValues;
-(id)changedHandler;
-(void)setChangedHandler:(id)arg1 ;
-(void)setDictionaryRepresentation:(id)arg1 fromCoder:(char)arg2 ;
-(id)initWithElementKey:(id)arg1 ;
-(char)isCustomized;
-(void)setInvertVertically:(char)arg1 ;
-(void)setInvertHorizontally:(char)arg1 ;
-(void)setSwapAxes:(char)arg1 ;
-(void)setDictionaryRepresentation:(id)arg1 ;
-(NSString *)mappingKey;
-(char)invertHorizontally;
-(char)invertVertically;
-(char)swapAxes;
@end

