/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSImage, NSString, NSURLResponse;

@interface WBSTouchIconFetchOperationResult : NSObject {

	char _favicon;
	char _pageRequestDidSucceed;
	char _higherPriorityIconDownloadFailedDueToNetworkError;
	NSImage* _touchIcon;
	NSString* _host;
	NSURLResponse* _response;

}

@property (nonatomic,readonly) NSImage * touchIcon;                                                 //@synthesize touchIcon=_touchIcon - In the implementation block
@property (nonatomic,copy,readonly) NSString * host;                                                //@synthesize host=_host - In the implementation block
@property (getter=isFavicon,nonatomic,readonly) char favicon;                                       //@synthesize favicon=_favicon - In the implementation block
@property (nonatomic,readonly) char pageRequestDidSucceed;                                          //@synthesize pageRequestDidSucceed=_pageRequestDidSucceed - In the implementation block
@property (nonatomic,readonly) char higherPriorityIconDownloadFailedDueToNetworkError;              //@synthesize higherPriorityIconDownloadFailedDueToNetworkError=_higherPriorityIconDownloadFailedDueToNetworkError - In the implementation block
@property (nonatomic,readonly) NSURLResponse * response;                                            //@synthesize response=_response - In the implementation block
+(id)resultWithTouchIcon:(id)arg1 host:(id)arg2 isFavicon:(char)arg3 pageRequestDidSucceed:(char)arg4 response:(id)arg5 higherPriorityIconDownloadFailedDueToNetworkError:(char)arg6 ;
+(id)resultForFetchFailureWithHost:(id)arg1 pageRequestDidSucceed:(char)arg2 response:(id)arg3 ;
-(NSString *)host;
-(NSURLResponse *)response;
-(NSImage *)touchIcon;
-(char)isFavicon;
-(char)pageRequestDidSucceed;
-(char)higherPriorityIconDownloadFailedDueToNetworkError;
-(id)initWithTouchIcon:(id)arg1 host:(id)arg2 isFavicon:(char)arg3 pageRequestDidSucceed:(char)arg4 response:(id)arg5 higherPriorityIconDownloadFailedDueToNetworkError:(char)arg6 ;
@end
