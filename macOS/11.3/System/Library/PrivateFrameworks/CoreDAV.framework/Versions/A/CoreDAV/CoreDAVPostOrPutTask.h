/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSString, NSData, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {

	char _forceToServer;
	NSString* _previousETag;
	NSString* _requestDataContentType;
	NSData* _requestDataPayload;
	char _sendOrder;
	int _absoluteOrder;
	NSURL* _priorOrderedURL;

}

@property (nonatomic,retain) NSString * requestDataContentType;              //@synthesize requestDataContentType=_requestDataContentType - In the implementation block
@property (nonatomic,retain) NSData * requestDataPayload;                    //@synthesize requestDataPayload=_requestDataPayload - In the implementation block
@property (assign,nonatomic) char forceToServer;                             //@synthesize forceToServer=_forceToServer - In the implementation block
@property (nonatomic,retain) NSURL * priorOrderedURL;                        //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
@property (assign,nonatomic) int absoluteOrder;                              //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                        //@synthesize previousETag=_previousETag - In the implementation block
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(NSString *)previousETag;
-(id)additionalHeaderValues;
-(id)requestBody;
-(void)setPreviousETag:(NSString *)arg1 ;
-(id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4 ;
-(char)forceToServer;
-(void)setForceToServer:(char)arg1 ;
-(NSData *)requestDataPayload;
-(int)absoluteOrder;
-(void)setAbsoluteOrder:(int)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSString *)requestDataContentType;
-(void)setRequestDataContentType:(NSString *)arg1 ;
-(void)setRequestDataPayload:(NSData *)arg1 ;
-(NSURL *)priorOrderedURL;
@end

