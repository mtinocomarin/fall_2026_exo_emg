// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.21%
// test_accuracy: 54.17%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 13:43:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.400436, 0.400450,
    0.198150, -0.198154,
    0.124050, -0.124049,
    -0.080240, 0.080232,
    -0.544482, 0.544484,
    -0.159032, 0.159021,
    0.262280, -0.262272,
    0.130414, -0.130411,
    -0.512291, 0.512325,
    0.242929, -0.242964,
    -0.076671, 0.076683,
    0.201489, -0.201491,
};

float Cg_init[2] = {
    -0.179714, -0.179720
};

float xstd_init[12] = {
    0.001022, 0.000081, 0.011534, 0.079580, 0.002714, 0.000749, 0.079578, 0.169219, 0.000867, 0.000116, 0.017472, 0.071401
};

float xmean_init[12] = {
    0.006414, -0.007691, 0.004444, 0.139643, 0.008660, -0.006863, 0.102619, 0.449643, 0.004342, -0.007716, 0.008254, 0.128334
};

