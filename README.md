# PSoC Audio MIDI

**Jazz Theremin prototype combining PSoC 5LP audio generation, musical control,
and an ESP32 companion interface.**

A 2023 student project by **Marius Mannel and Silvan Weber**. This repository
preserves the original firmware, hardware-project files, and project documents.

## Implementation

- PSoC 5LP application firmware and a PSoC Creator workspace.
- ESP32 Arduino companion communicating with the PSoC over UART.
- Musical note/scale tables and an OLED interface in the companion firmware.
- Project report, user manual, and wiring schematic for the original prototype.

## Repository map

| Area | Entry point |
| --- | --- |
| PSoC workspace | [PSoC_Audio_MIDI.cywrk](PSoC_Audio_MIDI/PSoC_Audio_MIDI.cywrk) |
| PSoC application | [main.c](PSoC_Audio_MIDI/PSoC_Audio_MIDI.cydsn/main.c) |
| ESP32 companion | [main.cpp](<ESP32 PSoC Connector ESP5/src/main.cpp>) |
| Project report | [PSoC 5LP Project Mannel Weber.pdf](<PSoC 5LP Project Mannel Weber.pdf>) |
| User manual | [PSoC_ESP32_AUDIO_UserManual.pdf](PSoC_ESP32_AUDIO_UserManual.pdf) |
| Wiring schematic | [PSoC_ESP32_AUDIO_Wiring_Schematic_rev1.pdf](PSoC_ESP32_AUDIO_Wiring_Schematic_rev1.pdf) |

## Development context

The PSoC project requires Cypress PSoC Creator and the appropriate device/component
support. The ESP32 companion uses Arduino/PlatformIO and the libraries referenced
in its source and project configuration. Review the original hardware documents
and pin assignments before connecting or programming hardware.

This documentation update does not change firmware, regenerate vendor code, or
establish that the archived project builds with current tool versions.

## Authorship and vendor material

The existing license names **both Marius Mannel and Silvan Weber**. Keep both
attributions. Generated Cypress code contains its own copyright and EULA notices;
the repository's BSD license does not relicense or override that vendor material.
Dependencies and toolchain components retain their respective terms.

## License and reuse

The project code is available under the [BSD 3-Clause license](LICENCE),
including commercial use, subject to its conditions. Preserve the applicable
copyright, license, and disclaimer notices when redistributing it.

If you build something with this project, a short note via a GitHub issue and
credit linking to https://github.com/ILLVAN/PSoC_Audio_MIDI would be appreciated.
This is a voluntary request, not an additional license condition. Third-party
components retain their own licenses and notices.
