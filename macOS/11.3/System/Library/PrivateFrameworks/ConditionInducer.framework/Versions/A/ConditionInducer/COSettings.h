/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConditionInducer.framework/Versions/A/ConditionInducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSURL, NSMutableDictionary, NSObject;

@interface COSettings : NSObject {

	NSURL* _path;
	NSMutableDictionary* _settings;
	NSObject*<OS_dispatch_source> _source;
	/*^block*/id _clientCallback;
	NSURL* _url;

}

@property (nonatomic,retain) NSMutableDictionary * settings;                    //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) id clientCallback;                                   //@synthesize clientCallback=_clientCallback - In the implementation block
@property (nonatomic,retain) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSURL * path;                                    //@synthesize path=_path - In the implementation block
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)path;
-(NSObject*<OS_dispatch_source>)source;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)dictionaryRepresentation;
-(void)stopMonitoring;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSMutableDictionary *)settings;
-(void)setSettings:(NSMutableDictionary *)arg1 ;
-(char)writeSettings;
-(char)createSettingsFile;
-(void)setClientCallback:(id)arg1 ;
-(char)startMonitoringForFileDeletion;
-(void)stopMonitoringForFileDeletion;
-(char)readSettings;
-(id)clientCallback;
-(void)startMonitoringForChanges:(/*^block*/id)arg1 ;
@end
