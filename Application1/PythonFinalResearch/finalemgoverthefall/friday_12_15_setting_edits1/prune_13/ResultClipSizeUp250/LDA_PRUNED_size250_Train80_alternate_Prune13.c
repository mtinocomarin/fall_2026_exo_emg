// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.45%
// test_accuracy: 78.12%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_2.txt', 'act1\\trial_21.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_12.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 13:17:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.516505, 1.516495,
    0.291541, -0.291519,
    1.116062, -1.116079,
    0.517685, -0.517677,
    -0.186148, 0.186231,
    -0.237888, 0.237793,
    0.002607, -0.002596,
    0.455459, -0.455459,
    -0.312434, 0.312373,
    -0.283823, 0.283922,
    0.066183, -0.066219,
    0.391246, -0.391254,
};

float Cg_init[2] = {
    -0.558220, -0.558223
};

float xstd_init[12] = {
    0.004786, 0.002229, 0.336713, 0.117682, 0.001608, 0.000309, 0.066269, 0.141190, 0.000649, 0.000148, 0.043687, 0.149226
};

float xmean_init[12] = {
    0.011126, -0.005477, 0.448684, 1.029737, 0.003741, -0.007696, 0.021491, 0.642632, 0.003537, -0.007742, 0.012281, 0.697895
};

