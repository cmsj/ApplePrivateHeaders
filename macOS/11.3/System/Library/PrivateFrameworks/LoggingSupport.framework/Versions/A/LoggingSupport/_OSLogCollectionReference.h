/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _OSLogDirectoryReference;

@interface _OSLogCollectionReference : NSObject {

	_OSLogDirectoryReference* _diagnosticsDirectoryReference;
	_OSLogDirectoryReference* _timesyncReference;
	_OSLogDirectoryReference* _UUIDTextReference;

}

@property (nonatomic,readonly) _OSLogDirectoryReference * diagnosticsDirectoryReference;              //@synthesize diagnosticsDirectoryReference=_diagnosticsDirectoryReference - In the implementation block
@property (nonatomic,readonly) _OSLogDirectoryReference * timesyncReference;                          //@synthesize timesyncReference=_timesyncReference - In the implementation block
@property (nonatomic,readonly) _OSLogDirectoryReference * UUIDTextReference;                          //@synthesize UUIDTextReference=_UUIDTextReference - In the implementation block
+(id)referenceWithURL:(id)arg1 error:(id*)arg2 ;
+(id)localDBRefWithError:(id*)arg1 ;
-(_OSLogDirectoryReference *)diagnosticsDirectoryReference;
-(_OSLogDirectoryReference *)UUIDTextReference;
-(_OSLogDirectoryReference *)timesyncReference;
-(id)initWithDiagnosticsDirectory:(id)arg1 timesyncDirectory:(id)arg2 UUIDTextDirectory:(id)arg3 ;
-(void)close;
@end

