/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSText/TSText-Structs.h>
@class NSDictionary, NSCharacterSet;

@interface TSWPTextMeasurerBundle : NSObject {

	NSDictionary* _fontAttributes;
	NSCharacterSet* _coveredCharacterSet;
	TSWPFontHeightInfo _fontHeightInfo;

}

@property (nonatomic,retain) NSDictionary * fontAttributes;                     //@synthesize fontAttributes=_fontAttributes - In the implementation block
@property (assign,nonatomic) TSWPFontHeightInfo fontHeightInfo;                 //@synthesize fontHeightInfo=_fontHeightInfo - In the implementation block
@property (nonatomic,retain) NSCharacterSet * coveredCharacterSet;              //@synthesize coveredCharacterSet=_coveredCharacterSet - In the implementation block
-(NSDictionary *)fontAttributes;
-(NSCharacterSet *)coveredCharacterSet;
-(void)setFontAttributes:(NSDictionary *)arg1 ;
-(TSWPFontHeightInfo)fontHeightInfo;
-(void)setFontHeightInfo:(TSWPFontHeightInfo)arg1 ;
-(void)setCoveredCharacterSet:(NSCharacterSet *)arg1 ;
@end

