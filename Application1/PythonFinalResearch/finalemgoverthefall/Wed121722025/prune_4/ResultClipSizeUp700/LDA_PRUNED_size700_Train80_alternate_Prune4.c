// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 67.86%
// test_accuracy: 52.88%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-17 13:43:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.341755, 0.341741,
    0.189531, -0.189501,
    -0.001616, 0.001618,
    -0.120367, 0.120339,
    -0.438506, 0.438593,
    -0.147105, 0.147032,
    0.087801, -0.087815,
    0.296572, -0.296589,
    -0.439212, 0.439186,
    0.207637, -0.207551,
    0.013141, -0.013153,
    0.142577, -0.142630,
};

float Cg_init[2] = {
    -0.123208, -0.123204
};

float xstd_init[12] = {
    0.001009, 0.000080, 0.011739, 0.078927, 0.003082, 0.000853, 0.091636, 0.182668, 0.000857, 0.000113, 0.019886, 0.075293
};

float xmean_init[12] = {
    0.006474, -0.007689, 0.004542, 0.143462, 0.008587, -0.006853, 0.106118, 0.438077, 0.004351, -0.007716, 0.010586, 0.127583
};

