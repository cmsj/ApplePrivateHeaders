/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/Versions/A/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNTwoPassRequest.h>
#import <libobjc.A.dylib/SNAnalysisPassStrategyProviding.h>

@class SNTwoPassConfiguration, NSString;

@interface SNCustomTwoPassRequest : NSObject <SNTwoPassRequest, SNAnalysisPassStrategyProviding> {

	/*^block*/id _createSecondPassControllerFunction;
	SNTwoPassConfiguration* _twoPassConfiguration;

}

@property (readonly) SNTwoPassConfiguration * twoPassConfiguration;              //@synthesize twoPassConfiguration=_twoPassConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long analysisPassStrategy; 
-(id)createSecondPassController;
-(SNTwoPassConfiguration *)twoPassConfiguration;
-(long long)analysisPassStrategy;
-(id)initWithTwoPassConfiguration:(id)arg1 createSecondPassControllerFunction:(/*^block*/id)arg2 ;
@end
