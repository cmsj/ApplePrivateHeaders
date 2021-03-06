/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/PrintCore.framework/Versions/A/PrintCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PrintCore/PrintCore-Structs.h>
@class NSDictionary, NSArray;

@interface PMInkChecker : NSObject {

	OpaquePMPrinter* _printer;
	NSDictionary* _supplies;
	NSArray* _consumables;

}
+(id)inkCheckerWithPrinter:(OpaquePMPrinter*)arg1 ;
-(void)setSupplies:(id)arg1 ;
-(void)setConsumables:(id)arg1 ;
-(id)consumables;
-(char)isSupplyInkRelated:(int)arg1 ;
-(id)modifyPrinterStateReasonString:(id)arg1 forSupplyType:(int)arg2 ;
-(void)inkCheckFinished:(id)arg1 ;
-(void)localizeSupplies:(id)arg1 ppd:(ppd_file_s*)arg2 ;
-(id)lowConsumables;
-(id)supplies;
-(int)checkInk:(char)arg1 ;
-(char)inkIsLow;
-(id)inkSummary;
-(id)disclaimer;
-(id)vendorSuppliesInfo;
-(id)markerChangeTime;
-(void)dealloc;
-(OpaquePMPrinter*)printer;
-(void)setPrinter:(OpaquePMPrinter*)arg1 ;
-(id)initWithPrinter:(OpaquePMPrinter*)arg1 ;
@end

