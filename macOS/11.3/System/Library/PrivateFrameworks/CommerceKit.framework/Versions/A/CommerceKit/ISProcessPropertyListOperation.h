/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreFoundation/ISOperation.h>
#import <libobjc.A.dylib/ISURLOperationDelegate.h>

@class ISPropertyListProvider, NSDictionary, NSURL, NSString;

@interface ISProcessPropertyListOperation : ISOperation <ISURLOperationDelegate> {

	ISPropertyListProvider* _dataProvider;
	NSDictionary* _propertyList;
	NSURL* _propertyListURL;
	/*^block*/id _preParserBlock;

}

@property (retain) ISPropertyListProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)run;
-(ISPropertyListProvider *)dataProvider;
-(id)initWithStoreClient:(id)arg1 ;
-(void)setDataProvider:(ISPropertyListProvider *)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)initWithPropertyList:(id)arg1 storeClient:(id)arg2 ;
-(id)initWithPropertyListAtURL:(id)arg1 withPreParserBlock:(/*^block*/id)arg2 storeClient:(id)arg3 ;
@end

