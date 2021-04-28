/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class TSUBezierPath, NSString;

@interface TSDSVGToBezierPathConverter : NSObject <NSXMLParserDelegate> {

	TSUBezierPath* mFileBezierPath;
	NSString* mHiddenOnTag;
	unsigned long long mHiddenOnTagNestedCount;
	CGAffineTransform mGroupedAffineTransform;
	unsigned long long mGroupedAffineTransformNestedCount;
	char mViewBoxFound;
	CGRect mViewBox;
	char mUsesEvenOdd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGPathRef)newPathFromSVGPathString:(id)arg1 ;
+(CGAffineTransform)transformFromSVGTransformAttributeString:(id)arg1 ;
+(CGPathRef)newPathFromSVGPathString:(id)arg1 shouldClosePathAtEnd:(char)arg2 ;
+(CGPathRef)newPathFromSVGPolylineString:(id)arg1 ;
+(CGPathRef)newPathFromSVGPolygonString:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(id)bezierPathFromSVGData:(id)arg1 ;
@end
