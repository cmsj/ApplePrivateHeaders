/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/Versions/A/AccessibilityPlatformTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXPTranslationDelegateHelper, AXPTranslationTokenDelegateHelper, AXPTranslationRuntimeHelper, AXPTranslationSystemAppDelegate;
#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
@class NSMutableDictionary;

@interface AXPTranslator : NSObject {

	char _accessibilityEnabled;
	char _supportsDelegateTokens;
	id<AXPTranslationDelegateHelper> _bridgeDelegate;
	id<AXPTranslationTokenDelegateHelper> _bridgeTokenDelegate;
	id<AXPTranslationRuntimeHelper> _runtimeDelegate;
	id<AXPTranslationSystemAppDelegate> _systemAppDelegate;
	NSMutableDictionary* _fakeElementCache;

}

@property (nonatomic,retain) NSMutableDictionary * fakeElementCache;                                        //@synthesize fakeElementCache=_fakeElementCache - In the implementation block
@property (assign,nonatomic) char supportsDelegateTokens;                                                   //@synthesize supportsDelegateTokens=_supportsDelegateTokens - In the implementation block
@property (assign,nonatomic,__weak) id<AXPTranslationDelegateHelper> bridgeDelegate;                        //@synthesize bridgeDelegate=_bridgeDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<AXPTranslationTokenDelegateHelper> bridgeTokenDelegate;              //@synthesize bridgeTokenDelegate=_bridgeTokenDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<AXPTranslationRuntimeHelper> runtimeDelegate;                        //@synthesize runtimeDelegate=_runtimeDelegate - In the implementation block
@property (assign,nonatomic) char accessibilityEnabled;                                                     //@synthesize accessibilityEnabled=_accessibilityEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<AXPTranslationSystemAppDelegate> systemAppDelegate;                  //@synthesize systemAppDelegate=_systemAppDelegate - In the implementation block
+(id)sharedInstance;
+(id)sharediOSInstance;
+(id)sharedmacOSInstance;
-(id)init;
-(void)setAccessibilityEnabled:(char)arg1 ;
-(char)accessibilityEnabled;
-(id)sendTranslatorRequest:(id)arg1 ;
-(id)translationApplicationObject;
-(id)translationObjectFromData:(id)arg1 ;
-(char)supportsDelegateTokens;
-(id<AXPTranslationTokenDelegateHelper>)bridgeTokenDelegate;
-(id<AXPTranslationDelegateHelper>)bridgeDelegate;
-(id)platformTranslator;
-(/*^block*/id)attributedStringConversionBlock;
-(id)platformElementFromTranslation:(id)arg1 ;
-(id<AXPTranslationSystemAppDelegate>)systemAppDelegate;
-(void)enableAccessibility;
-(void)initializeAXRuntimeForSystemAppServer;
-(id)processMultipleAttributeRequest:(id)arg1 ;
-(id)processActionRequest:(id)arg1 ;
-(id)processCanSetAttribute:(id)arg1 ;
-(id)processSetAttribute:(id)arg1 ;
-(id)processSupportedActions:(id)arg1 ;
-(id)processSupportsAttributes:(id)arg1 ;
-(id)processAttributeRequest:(id)arg1 ;
-(id)processFrontMostApp:(id)arg1 ;
-(id)processHitTest:(id)arg1 ;
-(id)remoteTranslationDataWithTranslation:(id)arg1 pid:(int)arg2 ;
-(void)handleNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3 ;
-(id<AXPTranslationRuntimeHelper>)runtimeDelegate;
-(void)setFakeElementCache:(NSMutableDictionary *)arg1 ;
-(id)_translationApplicationObjectForPidNumber:(id)arg1 ;
-(NSMutableDictionary *)fakeElementCache;
-(void)_resetBridgeTokensForResponse:(id)arg1 bridgeDelegateToken:(id)arg2 ;
-(id)processTranslatorRequest:(id)arg1 ;
-(id)macPlatformElementFromTranslation:(id)arg1 ;
-(void)setSystemAppDelegate:(id<AXPTranslationSystemAppDelegate>)arg1 ;
-(void)setBridgeDelegate:(id<AXPTranslationDelegateHelper>)arg1 ;
-(void)setSupportsDelegateTokens:(char)arg1 ;
-(void)setBridgeTokenDelegate:(id<AXPTranslationTokenDelegateHelper>)arg1 ;
-(void)setRuntimeDelegate:(id<AXPTranslationRuntimeHelper>)arg1 ;
-(id)translationApplicationObjectForPid:(int)arg1 ;
-(id)frontmostApplicationWithDisplayId:(unsigned)arg1 bridgeDelegateToken:(id)arg2 ;
-(id)objectAtPoint:(CGPoint)arg1 displayId:(unsigned)arg2 bridgeDelegateToken:(id)arg3 ;
-(id)appKitPlatformElementFromTranslation:(id)arg1 ;
-(void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2 ;
@end
