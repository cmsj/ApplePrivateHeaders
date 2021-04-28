/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface NSHTTPCookie2StorageFilter : NSObject {

	char _isTrusted;
	char _isTrustedCached;
	NSString* _urlScheme;
	char _isTopLevelNavigation;
	char _isSafe;
	char _overwriteHTTPOnlyCookies;
	NSURL* _url;
	NSURL* _mainDocumentURL;
	NSURL* _siteForCookies;
	NSString* _partition;
	unsigned long long _acceptPolicy;

}

@property (nonatomic,retain) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSURL * mainDocumentURL;              //@synthesize mainDocumentURL=_mainDocumentURL - In the implementation block
@property (nonatomic,retain) NSURL * siteForCookies;               //@synthesize siteForCookies=_siteForCookies - In the implementation block
@property (nonatomic,retain) NSString * partition;                 //@synthesize partition=_partition - In the implementation block
@property (assign) char isTopLevelNavigation;                      //@synthesize isTopLevelNavigation=_isTopLevelNavigation - In the implementation block
@property (assign) char isSafe;                                    //@synthesize isSafe=_isSafe - In the implementation block
@property (assign) char overwriteHTTPOnlyCookies;                  //@synthesize overwriteHTTPOnlyCookies=_overwriteHTTPOnlyCookies - In the implementation block
@property (assign) unsigned long long acceptPolicy;                //@synthesize acceptPolicy=_acceptPolicy - In the implementation block
-(void)setAcceptPolicy:(unsigned long long)arg1 ;
-(void)setIsTopLevelNavigation:(char)arg1 ;
-(void)setIsSafe:(char)arg1 ;
-(void)setSiteForCookies:(NSURL *)arg1 ;
-(void)setOverwriteHTTPOnlyCookies:(char)arg1 ;
-(NSURL *)siteForCookies;
-(char)isTopLevelNavigation;
-(unsigned long long)acceptPolicy;
-(char)overwriteHTTPOnlyCookies;
-(id)init;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)mainDocumentURL;
-(void)setMainDocumentURL:(NSURL *)arg1 ;
-(void)setPartition:(NSString *)arg1 ;
-(NSString *)partition;
-(char)isTrusted;
-(char)isSafe;
@end
