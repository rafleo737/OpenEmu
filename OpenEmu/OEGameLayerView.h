//
//  OEGameLayerView.h
//  OpenEmu
//
//  Created by Alexander Strange on 4/19/16.
//
//

@import Cocoa;
#import "OEGameView.h"

// SPI USE: Stolen from Chrome.
typedef uint32_t CAContextID;

@interface OEGameLayerView : NSView

@property (nonatomic, weak) id<OEGameViewDelegate> delegate;
@property (nonatomic) NSColor *backgroundColor;
@property (nonatomic) CAContextID remoteContextID;

// TODO shouldn't be an instance method
- (NSSize)correctScreenSize:(OEIntSize)screenSize forAspectSize:(OEIntSize)aspectSize returnVertices:(BOOL)flag;

@end
