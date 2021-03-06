/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTAutomationSupport/XCTMatchingElementIterator.h>

@class NSEnumerator, XCTElementFilteringTransformer;

@interface XCTFilteringTransformerIterator : XCTMatchingElementIterator {

	NSEnumerator* _inputEnumerator;
	XCTElementFilteringTransformer* _filteringTransformer;

}

@property (readonly) XCTElementFilteringTransformer * filteringTransformer;              //@synthesize filteringTransformer=_filteringTransformer - In the implementation block
-(id)nextMatch;
-(id)initWithInput:(id)arg1 filteringTransformer:(id)arg2 ;
-(XCTElementFilteringTransformer *)filteringTransformer;
@end

