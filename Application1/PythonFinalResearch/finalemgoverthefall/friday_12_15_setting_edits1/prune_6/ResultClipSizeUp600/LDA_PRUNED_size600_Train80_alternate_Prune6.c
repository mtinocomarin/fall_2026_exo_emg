// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.37%
// test_accuracy: 74.43%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_16.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 13:14:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.471967, 0.471950,
    -0.078939, 0.078936,
    0.558035, -0.558020,
    0.411343, -0.411336,
    -0.646698, 0.646439,
    0.202600, -0.202320,
    0.054636, -0.054636,
    0.303077, -0.303081,
    0.154374, -0.154328,
    -0.213361, 0.213298,
    -0.397880, 0.397901,
    0.260733, -0.260724,
};

float Cg_init[2] = {
    -0.306407, -0.306393
};

float xstd_init[12] = {
    0.004382, 0.001988, 0.330377, 0.121028, 0.001164, 0.000207, 0.052527, 0.132791, 0.000671, 0.000168, 0.048823, 0.142226
};

float xmean_init[12] = {
    0.010330, -0.005722, 0.433798, 1.032237, 0.003440, -0.007751, 0.013520, 0.614195, 0.003531, -0.007731, 0.016434, 0.700000
};

