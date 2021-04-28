/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface NSPersistentUIWindowInfo : NSObject {

	unsigned windowID;
	int currentStatus;
	unsigned currentGeneration;
	unsigned char recordEncryptionKey[16];
	NSDictionary* externalPublicProperties;

}

@property (assign) unsigned windowID; 
-(void)dealloc;
-(id)init;
-(unsigned)windowID;
-(void)setWindowID:(unsigned)arg1 ;
-(char)isGlobal;
-(void)setExternalPublicProperties:(id)arg1 ;
-(id)copyAllPublicProperties;
-(const char*)recordEncryptionKey;
@end
