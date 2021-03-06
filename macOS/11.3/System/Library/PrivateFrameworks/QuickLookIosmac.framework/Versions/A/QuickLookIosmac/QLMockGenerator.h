/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/QuickLookIosmac.framework/Versions/A/QuickLookIosmac
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface QLMockGenerator : NSObject {

	NSString* _identifier;
	NSArray* _supportedTypes;
	NSString* _displayBundleID;
	NSString* _location;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * supportedTypes;              //@synthesize supportedTypes=_supportedTypes - In the implementation block
@property (nonatomic,copy) NSString * displayBundleID;              //@synthesize displayBundleID=_displayBundleID - In the implementation block
@property (nonatomic,copy) NSString * location;                     //@synthesize location=_location - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(NSArray *)supportedTypes;
-(void)setSupportedTypes:(NSArray *)arg1 ;
-(NSString *)displayBundleID;
-(void)setDisplayBundleID:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 location:(id)arg2 displayBundle:(id)arg3 supportedTypes:(id)arg4 ;
@end

