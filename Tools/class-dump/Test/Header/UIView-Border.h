//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIColor;

@interface UIView (Border)
- (void)sendBorderViewToBack;
- (void)bringBorderViewToFront;
@property(nonatomic) struct UIEdgeInsets borderEdge;
@property(nonatomic) unsigned long long borderType;
@property(retain, nonatomic) UIColor *borderColor;
@property(nonatomic) double borderWidth;
- (id)borderView;
- (void)setBorderView:(id)arg1;
@property(retain, nonatomic) NSArray *borderItems;
@end
