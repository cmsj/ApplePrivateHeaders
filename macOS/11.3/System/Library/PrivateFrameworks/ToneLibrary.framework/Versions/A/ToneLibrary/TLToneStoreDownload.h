/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/Versions/A/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface TLToneStoreDownload : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSString* _name;
	NSString* _albumTitle;
	NSString* _artistName;
	double _duration;
	NSString* _genreName;
	char _isRingtone;
	unsigned long long _storeItemIdentifier;
	float _downloadProgress;
	NSString* _toneIdentifier;
	NSString* _identifier;

}

@property (setter=_setName:,nonatomic,copy) NSString * name; 
@property (setter=_setAlbumTitle:,nonatomic,copy) NSString * albumTitle; 
@property (setter=_setArtistName:,nonatomic,copy) NSString * artistName; 
@property (assign,setter=_setDuration:,nonatomic) double duration; 
@property (setter=_setGenreName:,nonatomic,copy) NSString * genreName; 
@property (assign,setter=_setRingtone:,getter=isRingtone,nonatomic) char ringtone; 
@property (assign,setter=_setStoreItemIdentifier:,nonatomic) unsigned long long storeItemIdentifier; 
@property (assign,setter=_setDownloadProgress:,nonatomic) float downloadProgress; 
@property (setter=_setToneIdentifier:,nonatomic,copy) NSString * toneIdentifier; 
@property (nonatomic,readonly) NSString * identifier;                                                             //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)name;
-(NSString *)identifier;
-(unsigned long long)storeItemIdentifier;
-(NSString *)artistName;
-(double)duration;
-(float)downloadProgress;
-(void)_setDuration:(double)arg1 ;
-(NSString *)toneIdentifier;
-(void)_setName:(id)arg1 ;
-(NSString *)albumTitle;
-(NSString *)genreName;
-(char)isRingtone;
-(void)_setAlbumTitle:(id)arg1 ;
-(void)_setArtistName:(id)arg1 ;
-(void)_setGenreName:(id)arg1 ;
-(void)_setRingtone:(char)arg1 ;
-(void)_setStoreItemIdentifier:(unsigned long long)arg1 ;
-(void)_setDownloadProgress:(float)arg1 ;
-(void)_setToneIdentifier:(id)arg1 ;
@end

