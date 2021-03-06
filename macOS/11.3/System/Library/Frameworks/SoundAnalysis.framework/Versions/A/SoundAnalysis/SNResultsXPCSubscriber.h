/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/Versions/A/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNResultsObserving.h>
#import <libobjc.A.dylib/SNResultsObservingXPCProtocol.h>

@protocol SNResultsObserving;
@class NSString;

@interface SNResultsXPCSubscriber : NSObject <SNResultsObserving, SNResultsObservingXPCProtocol> {

	id<SNResultsObserving> _receiver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)request:(id)arg1 didProduceResult:(id)arg2 ;
-(void)requestDidComplete:(id)arg1 ;
-(void)xpcRequest:(id)arg1 didProduceResult:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)xpcRequest:(id)arg1 didFailWithError:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)xpcRequestDidComplete:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithReceiver:(id)arg1 ;
@end

