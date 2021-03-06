/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FCLoadableFont : NSObject <NSCopying> {

	NSString* _fontName;
	NSURL* _fontURL;

}

@property (nonatomic,copy) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,retain) NSURL * fontURL;                //@synthesize fontURL=_fontURL - In the implementation block
+(id)loadableFontWithName:(id)arg1 url:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)fontName;
-(void)setFontName:(NSString *)arg1 ;
-(void)setFontURL:(NSURL *)arg1 ;
-(NSURL *)fontURL;
@end

