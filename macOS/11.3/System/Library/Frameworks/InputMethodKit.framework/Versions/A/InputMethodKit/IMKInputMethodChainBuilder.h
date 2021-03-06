/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMKInputMethodIMKChainable;
@class NSMutableArray, NSArray;

@interface IMKInputMethodChainBuilder : NSObject {

	NSMutableArray* _chainClasses;
	id<IMKInputMethod><IMKChainable> _terminus;
	id<IMKInputMethod><IMKChainable> _chain;
	NSArray* _chainMembers;
	/*^block*/id _configureChain;

}

@property (nonatomic,readonly) id<IMKInputMethod><IMKChainable> inputMethod; 
@property (nonatomic,readonly) NSArray * inputMethods; 
@property (assign,nonatomic) id configureChain;                                           //@synthesize configureChain=_configureChain - In the implementation block
-(id)initWithTerminus:(id)arg1 forChain:(id)arg2 ;
-(id)_buildChain;
-(id)_extractChainMembers;
-(id)initWithTerminus:(id)arg1 ;
-(void)addInputMethodClassToChain:(Class)arg1 ;
-(id)configureChain;
-(void)setConfigureChain:(id)arg1 ;
-(NSArray *)inputMethods;
-(id<IMKInputMethod><IMKChainable>)inputMethod;
@end

