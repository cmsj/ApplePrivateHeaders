/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Versions/A/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cards/CRInvocationChain.h>
#import <libobjc.A.dylib/CRInvocationChainDelegate.h>

@class Protocol, NSString;

@interface CRProtocolRestrictedInvocationChain : CRInvocationChain <CRInvocationChainDelegate> {

	Protocol* _restrictingProtocol;

}

@property (assign,nonatomic,__weak) id<CRInvocationChainDelegate> delegate; 
@property (nonatomic,retain) Protocol * restrictingProtocol;                             //@synthesize restrictingProtocol=_restrictingProtocol - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)conformsToProtocol:(id)arg1 ;
-(id)init;
-(void)setRestrictingProtocol:(Protocol *)arg1 ;
-(char)invocationChain:(id)arg1 shouldForwardInvocation:(id)arg2 toTarget:(id)arg3 ;
-(char)isEligibleForSelector:(SEL)arg1 ;
-(char)_selectorIsPartOfRestrictingProtocol:(SEL)arg1 ;
-(char)_selector:(SEL)arg1 isPartOfProtocol:(id)arg2 ;
-(Protocol *)restrictingProtocol;
@end

